/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:41:41 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/03 12:08:20 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) 
{
	std::cout << "////////////////////  INT //////////////////////" << std::endl;
	{
		std::cout << "//// EMPTY ////" << std::endl;
		Array<int> table1;
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;
	
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[0] : " << table1[0] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// NOT EMPTY ////" << std::endl;
		Array<int> table1(10);
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[11] : " << table1[11] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[9] : " << table1[9] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// COPY ////" << std::endl;
		Array<int> table1(10);		
		Array<int> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = 5;
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "//// ASSIGNATION ////" << std::endl;
		Array<int> table1(10);		
		Array<int> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = 5;
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}	
	std::cout << std::endl;
	std::cout << "//////////////////// DOUBLE //////////////////////" << std::endl;
	{
		std::cout << "//// EMPTY ////" << std::endl;
		Array<double> table1;
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;
	
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[0] : " << table1[0] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// NOT EMPTY ////" << std::endl;
		Array<double> table1(10);
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[11] : " << table1[11] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[9] : " << table1[9] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// COPY ////" << std::endl;
		Array<double> table1(10);		
		Array<double> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = 5.5;
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "//// ASSIGNATION ////" << std::endl;
		Array<double> table1(10);		
		Array<double> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = 5.5;
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}

	std::cout << std::endl;
	std::cout << "//////////////////// FLOAT //////////////////////" << std::endl;
	{
		std::cout << "//// EMPTY ////" << std::endl;
		Array<float> table1;
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;
	
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[0] : " << table1[0] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// NOT EMPTY ////" << std::endl;
		Array<float> table1(10);
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[11] : " << table1[11] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[9] : " << table1[9] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// COPY ////" << std::endl;
		Array<float> table1(10);		
		Array<float> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = 5.5f;
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "//// ASSIGNATION ////" << std::endl;
		Array<float> table1(10);		
		Array<float> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = 5.5f;
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "//////////////////// STRING //////////////////////" << std::endl;
	{
		std::cout << "//// EMPTY ////" << std::endl;
		Array<std::string> table1;
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;
	
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[0] : " << table1[0] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// NOT EMPTY ////" << std::endl;
		Array<std::string> table1(10);
		std::cout << "TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[11] : " << table1[11] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE1[9] : " << table1[9] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "//// COPY ////" << std::endl;
		Array<std::string> table1(10);		
		Array<std::string> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;
		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = "modified";
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "//// ASSIGNATION ////" << std::endl;
		Array<std::string> table1(10);		
		Array<std::string> table2(table1);
		std::cout << " TABLE 2 SIZE : " << table2.size() << std::endl;
		std::cout << " TABLE 1 SIZE : " << table1.size() << std::endl;

		try
		{
			std::cout << " TABLE1[1] : " << table1[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << " TABLE2[1] : " << table2[1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		std::cout << "//// MODIFYING TABLE 1 ////" << std::endl;
		std::cout << " TABLE1[5] BEFORE : " << table1[5] << std::endl;
		table1[5] = "modified";
		std::cout << "  TABLE1[5] AFTER : " << table1[5] << std::endl;
		std::cout << "        TABLE2[5] : " << table2[5] << std::endl;
	}


	return 0;
}