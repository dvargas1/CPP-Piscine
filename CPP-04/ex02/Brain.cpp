/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 07:59:09 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 17:05:44 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : i(0){
  std::cout<<"Brain constructor"<<std::endl;
}

Brain::~Brain() {
    std::cout<<"Brain destructor"<<std::endl;
}

Brain::Brain(const Brain& cp) : i(cp.getIndex()) {
    std::cout<<"Brain copy constructor"<<std::endl;
    this->copyIdeas(cp, i);
}

Brain &Brain::operator=(const Brain& cp) {
    std::cout<<"Brain assign constructor"<<std::endl;
  if (this != &cp) {
    i = cp.getIndex();
    this->copyIdeas(cp, i);
  }
  return *this;
}

void Brain::copyIdeas(const Brain& cp, int i)
{
  for(int j = 0; j < i; j++)
    ideas[j] = cp.getIdea(j);
}

void Brain::setIdea(std::string newIdea) {
  ideas[i] = newIdea;
  i++;
}

void Brain::brainDump(){
  for(int j = 0; j < this->getIndex(); j++)
    std::cout<<this->getIdea(j)<<std::endl;
}

std::string Brain::getIdea(int index) const{ 
  if(index < 0)
    return "ERROR no idea for negative indexes";
  if(ideas[index].empty())
    return "Empty space for new ideas";
  return ideas[index]; 
  }
int Brain::getIndex() const{ return i; }
void Brain::setIndex(int i) { this->i = i;}
