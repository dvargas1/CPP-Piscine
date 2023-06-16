/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:02:22 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/16 07:42:47 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(char **input) {
    loadContainers(input);
    printVector(1);
    sortDeq();
    sortVec();
    printVector(2);
    std::cout << "\nResults: \n";
    printDequeTimeResult();
    printVecTimeResult();
}
PmergeMe::~PmergeMe(){}
PmergeMe::PmergeMe(PmergeMe &cp){
    vec = cp.vec;
    deq = cp.deq;
}
PmergeMe& PmergeMe::operator=(PmergeMe &cp) {
    if(this != &cp) {
        vec = cp.vec;
        deq = cp.deq;
    }
    return *this;
}
std::vector<int> PmergeMe::getVec() { return vec; }
std::deque<int> PmergeMe::getDeq() { return deq; }
void PmergeMe::loadContainers(char **input) {
    for(size_t i = 1; input[i]; i++) {
        for(int j = 0; input[i][j]; j++){
            if(!isdigit(input[i][j]))
                throw InputError();
        }
        int nb = atoi(input[i]);
        if (nb < 0)
            throw InputError();
        vec.push_back(nb);
        deq.push_back(nb);
    }
}
void PmergeMe::printVector(int flag) {
    if(flag == 1){
        std::cout<< "Before: ";
    for (long unsigned int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    }
    if(flag == 2) {
        std::cout<< "\nAfter: "; 
        for (long unsigned int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    }
}

void PmergeMe::printVecTimeResult() {
    std::cout << "Time to process a range of " << vec.size() << " elements with std Vector: ";
    std::cout << std::fixed << timeofVec << " us" << std::endl;
}

void PmergeMe::printDequeTimeResult() {
    std::cout << "Time to process a range of " << deq.size() << " elements with std Deque: ";
    std::cout << std::fixed << timeofDeq << " us" << std::endl;
}

void PmergeMe::sortVec() {
    clock_t starttime = clock();
    fordMergeSort(vec, 0, deq.size() - 1);
    clock_t endtime = clock();
    timeofVec = static_cast<double>(endtime - starttime) / CLOCKS_PER_SEC;
}

void PmergeMe::sortDeq() {
    clock_t starttime = clock();
    fordMergeSort(deq, 0, deq.size() - 1);
    clock_t endtime = clock();
    timeofDeq = static_cast<double>(endtime - starttime) / CLOCKS_PER_SEC;
}

template <typename T>
void PmergeMe::fordMergeSort(T& arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2;
    fordMergeSort(arr, start, mid);
    fordMergeSort(arr, mid + 1, end);
    johnsonInsert(arr, start, mid, end);
}

template <typename T>
void PmergeMe::johnsonInsert(T& arr, int start, int mid, int end) {
    T temp(end - start + 1);
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    while (j <= end) {
        temp[k++] = arr[j++];
    }
    std::copy(temp.begin(), temp.end(), arr.begin() + start);
}