/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 07:55:23 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 11:47:00 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS
#define BRAIN_CLASS

#include <iostream>

class Brain {
public:
    Brain();
    ~Brain();
    Brain(Brain const &cp);
    Brain& operator=(Brain const &cp);
    void setIdea(std::string newIdea);
    std::string getIdea(int i) const;
    int getIndex() const;
    void setIndex(int i);
    void copyIdeas(const Brain& cp, int i);
    void brainDump();
protected:
    std::string ideas[100];
    int i;
};

#endif