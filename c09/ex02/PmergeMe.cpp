/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 01:55:59 by vantonie          #+#    #+#             */
/*   Updated: 2024/01/07 16:24:12 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<std::pair<int,int> > PmergeMe::_vector;
std::deque<std::pair<int,int> > PmergeMe::_deque;

PmergeMe::PmergeMe(void) {
  return ;
}

PmergeMe::PmergeMe(PmergeMe const &src) {
  *this = src;
  return ;
}

PmergeMe::~PmergeMe(void) {
  return ;
}

PmergeMe  &PmergeMe::operator=(PmergeMe const &rhs) {
  (void)rhs;
  return (*this);
}

static void fillVectorInPairs(char **input) {
  int i = 1;
  while (input[i]) {
    int first = atoi(input[i]);
    if (first < 0)
      throw std::invalid_argument("Error");
    int second = -1;
    if(input[i+1]) {
      second = atoi(input[i+1]);
      if (second < 0)
      throw std::invalid_argument("Error");
      ++i;
    }
    PmergeMe::_vector.push_back(std::pair<int, int>(first, second));
    ++i;
  }
}

static void orderPairs() {
  for (size_t i = 0; i < PmergeMe::_vector.size(); i++) {
    if (PmergeMe::_vector[i].first > PmergeMe::_vector[i].second)
      std::swap(PmergeMe::_vector[i].first, PmergeMe::_vector[i].second);
  }
}

static void merge(int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  std::vector<std::pair<int, int> > L(n1), R(n2);
  for(int i = 0; i < n1; i++)
    L[i] = PmergeMe::_vector[l + i];
  for(int j = 0; j < n2; j++)
    R[j] = PmergeMe::_vector[m + 1+ j];
  int i = 0;
  int j = 0;
  int k = l;
  while (i < n1 && j < n2) {
    if (L[i].second <= R[j].second) {
      PmergeMe::_vector[k] = L[i];
      i++;
    } else {
      PmergeMe::_vector[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    PmergeMe::_vector[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    PmergeMe::_vector[k] = R[j];
    j++;
    k++;
  }
}

static void mergeSort(int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSort(l, m);
    mergeSort(m+1, r);
    merge(l, m, r);
  }
}

static int getNextJacobsthal(int current) {
  return 2 * current + 1;
}

static int binarySearch(std::vector<int>& arr, int l, int r, int x) {
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (arr[m] == x)
      return m;
    if (arr[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }
  return l;
}

void PmergeMe::mergeVector(char **input) {
  std::clock_t start = std::clock();
  std::vector<int> mainChain;
  std::vector<int> pend;
  int currentJacobsthal = 1;
  fillVectorInPairs(input);
  std::cout << "Before: ";
  int n = 1;
  while (input[n]) {
    std::cout<< input[n] << " ";
    n++;
  }
  std::cout << std::endl;
  orderPairs();
  mergeSort(0, PmergeMe::_vector.size() - 1);
  for (size_t i = 0; i < PmergeMe::_vector.size(); ++i) {
    mainChain.push_back(PmergeMe::_vector[i].second);
    pend.push_back(PmergeMe::_vector[i].first);
  }
  size_t pendIndex = 0;
  while (pendIndex < pend.size()) {
    int cur = pend[pendIndex];
    pendIndex++;
    int search_end = std::min((size_t)currentJacobsthal, mainChain.size());
    int position = binarySearch(mainChain, 0, search_end, cur);
    if (cur != -1)
      mainChain.insert(mainChain.begin() + position, cur);
    if (mainChain.size() > (size_t)currentJacobsthal)
      currentJacobsthal = getNextJacobsthal(currentJacobsthal);
  }
  std::cout << "After: ";
  for (size_t i = 0; i < mainChain.size(); ++i) {
    std::cout << mainChain[i] << " ";
  }
  std::cout << std::endl;
  std::clock_t end = std::clock();
  double duration = (end - start) / (double)CLOCKS_PER_SEC;
  std::cout << "Time to process a range of " << mainChain.size() << " elements with std::vector : " << duration * 1000 << " ms" << std::endl;
}

static void fillDequeInPairs(char **input) {
  int i = 1;
  while (input[i]) {
    int first = atoi(input[i]);
    if (first < 0)
      throw std::invalid_argument("Invalid argument");
    int second = -1;
    if(input[i+1]) {
      second = atoi(input[i+1]);
      if (second < 0)
      throw std::invalid_argument("Invalid argument");
      ++i;
    }
    PmergeMe::_deque.push_back(std::pair<int, int>(first, second));
    ++i;
  }
}

static void orderPairsDeque() {
  for (size_t i = 0; i < PmergeMe::_deque.size(); i++) {
    if (PmergeMe::_deque[i].first > PmergeMe::_deque[i].second)
      std::swap(PmergeMe::_deque[i].first, PmergeMe::_deque[i].second);
  }
}

static void mergeDeque(int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;
  std::deque<std::pair<int, int> > L(n1), R(n2);
  for(int i = 0; i < n1; i++)
    L[i] = PmergeMe::_deque[l + i];
  for(int j = 0; j < n2; j++)
    R[j] = PmergeMe::_deque[m + 1+ j];
  int i = 0;
  int j = 0;
  int k = l;
  while (i < n1 && j < n2) {
    if (L[i].second <= R[j].second) {
      PmergeMe::_deque[k] = L[i];
      i++;
    } else {
      PmergeMe::_deque[k] = R[j];
      j++;
      }
    k++;
  }
  while (i < n1) {
    PmergeMe::_deque[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    PmergeMe::_deque[k] = R[j];
    j++;
    k++;
  }
}

static void mergeSortDeque(int l, int r) {
  if (l < r) {
    int m = l+(r-l)/2;
    mergeSortDeque(l, m);
    mergeSortDeque(m+1, r);
    mergeDeque(l, m, r);
  }
}

static int binarySearchDeque(std::deque<int>& arr, int l, int r, int x) {
  while (l <= r) {
    int m = l + (r - l) / 2;
    if (arr[m] == x)
      return m;
    if (arr[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }
  return l;
}

void PmergeMe::mergeDeque(char **input) {
  std::clock_t start = std::clock();
  std::deque<int> mainChain;
  std::deque<int> pend;
  int currentJacobsthal = 1;
  fillDequeInPairs(input);
  orderPairsDeque();
  mergeSortDeque(0, PmergeMe::_deque.size() - 1);
  for (size_t i = 0; i < PmergeMe::_deque.size(); ++i) {
    mainChain.push_back(PmergeMe::_deque[i].second);
    pend.push_back(PmergeMe::_deque[i].first);
  }
  size_t pendIndex = 0;
  while (pendIndex < pend.size()) {
    int cur = pend[pendIndex];
    pendIndex++;
    int search_end = std::min((size_t)currentJacobsthal, mainChain.size());
    int position = binarySearchDeque(mainChain, 0, search_end, cur);
    if (cur != -1)
      mainChain.insert(mainChain.begin() + position, cur);
    if (mainChain.size() > (size_t)currentJacobsthal)
      currentJacobsthal = getNextJacobsthal(currentJacobsthal);
  }
  std::clock_t end = std::clock();
  double duration = (end - start) / (double)CLOCKS_PER_SEC;
  std::cout << "Time to process a range of " << mainChain.size() << " elements with std::deque : " << duration * 1000 << " ms" << std::endl;
}