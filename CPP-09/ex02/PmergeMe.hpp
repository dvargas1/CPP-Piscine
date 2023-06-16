/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:37:40 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/16 07:42:46 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_CLASS
#define PMERGEME_CLASS

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <deque>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(char **input);
    ~PmergeMe();
    PmergeMe(PmergeMe &cp);
    PmergeMe& operator=(PmergeMe &cp);
    std::vector<int> getVec();
    std::deque<int> getDeq();
    void loadContainers(char **input);
    void printVector(int flag);
    void printVecTimeResult();
    void printDequeTimeResult();
    void sortVec();
    void sortDeq();
    template <typename T>
    void fordMergeSort(T& arr, int start, int end);
    template <typename T>
    void johnsonInsert(T& arr, int start, int mid, int end);
    class InputError: public std::exception {
		public:
			virtual const char* what() const throw() { return "Input error"; }
	};
private:
    std::vector<int> vec;
    std::deque<int> deq;
    double timeofVec;
    double timeofDeq;
};
#endif