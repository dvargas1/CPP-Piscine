/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:07 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 07:19:07 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

Contact::ParseString(std::string String){
    if(String.empty())
        return(FALSE);
    for(size_t i = 0; i < String.size(); i++){
        if(std::isprint(String[i]))std::
    }
}

Contact::SetName(std::string Name){

}

Contact::SetLastName(std::string LastName){

}
Contact::SetNickname(std::string Nickname){

}

Contact::SetPHoneNumber(std::string PhoneNumber){

}

Contact::SetSecret(std::string Secret)
{

}
