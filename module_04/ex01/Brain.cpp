/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:52:53 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/10 08:39:10 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
# include <iostream>
# include <iomanip>

Brain::Brain( void )
{
	std::srand(std::time(NULL));
	std::string	smiley[] = {
		"😭",
		"😂",
		"🥺",
		"🤣",
		"❤️",
		"✨",
		"🙏",
		"😍",
		"🥰",
		"😊",
	};

	std::string	quotes[] = {
		" You feel that? That electricity in the air when you're just aching to murder someone? Haven't felt that in such a long time.",
		" This is Handsome Jack, and I'm signing off on the hyperion! What do you guys think? Accent too much?",
		" Petty vandalism? Are you serious? That's how far you've fallen? It's just sad.",
		" It's cute that you all think you're the heroes of this little adventure, but, you're not.",
		" Vault hunter looks for the new vault. Vault hunter gets killed. By me. Seeing the problem here?"
		" I just bought a pony made of diamonds because I'm rich.",
		" You should have died when I told you!",
		" These pretzels suck!",
		" This guy rushes Me with a spoon... !",
		" I could have saved this planet! I could have actually restored order!",
		" What's that saying? Never pick a  fight with a man with nothing left to lose. You see bandit? I'm going to show you just how much YOU have left to lose [picks up Lilith] and I've got the most powerful siren on the planet to do it with. Lilith! kill the vault hunter. We have a date to keep with the warrior.",
		" All around the Sta-actus plant, the stalker chased the bandit. The stalker thought 'twas all in fun. POP!  goes the bandit.",
		" I'm a little teapot, bloody and cut! Here is my handle, here is my butt.  Uh, whoops. Gonna eat so many goddamn crumpets. It's gonna be a crumpocalypse.",
		" It fills me with revulsion I normally hold for plague vermin, or a beached whale, stuffed with expired mayonnaise left to rot in the scorching sun of a dying planet.",
		" I NOTICE YOU HAVEN'T SHOT ME IN THE FACE! CURIOUS AS TO WHY! Maybe you're weighing the moral pros and cons but let me assure you that OH MY GOD SHOOT ME IN THE FACE! WHAT ARE YOU WAITING FOR?"
		" Well, you look exactly like all these ridiculous statues-so I'm gonna keep pointing my gun at you, just in case.",
		" I'm capable of Phaselocking enemies into another dimension where they will die a prolonged, painful death. If this is not appealing to you, we have nothing to talk about.",
	};

	for (size_t i = 0; i < NB_IDEAS; i++)
	{
		this->ideas[i] = smiley[std::rand() % (sizeof(smiley) / sizeof(std::string))] + quotes[std::rand() % (sizeof(quotes) / sizeof(std::string))];
	}
}

Brain::Brain( Brain const & other )
{
	for (size_t i = 0; i < NB_IDEAS; i++)
	{
		this->ideas[i] = other.getIdea(i);
	}
	return ;
}

Brain::~Brain( void )
{
	return;
}

Brain	&Brain::operator=( Brain const & rhs )
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < NB_IDEAS; i++)
		{
			this->ideas[i] = rhs.getIdea(i);
		}
	}
	return *this;
}

std::string const	&Brain::getIdea( size_t index ) const
{
	std::ostringstream	s;

	s << NB_IDEAS;
	if (index < 0 || index >= NB_IDEAS)
		throw std::invalid_argument("Index must be beetween 0 and " + s.str());
	else
		return (this->ideas[index]);
}
