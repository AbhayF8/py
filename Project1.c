/*
 * Project1.c
 * 
 * Copyright 2022 Abhay Patel <patelabhayindia@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#include <stdio.h>

int main() {
	char name[15], city[10], mother[15], father[15], state[12], hobby[10], school[15], dream[10];
	int age,class;
	printf("Indroduce Yourself Maker\n");
	printf("Enter your name\n> ");
	scanf("%s",name);
	printf("Enter your age\n> ");
	scanf("%d",&age);
	printf("Enter your city\n> ");
	scanf("%s",city);
	printf("Enter your mother's name\n> ");
	scanf("%s",mother);
	printf("Enter your father's name\n> ");
	scanf("%s",father);
	printf("Enter your state\n> ");
	scanf("%s",state);
	printf("Enter your hobby\n> ");
	scanf("%s",hobby);
	printf("Enter your class\n> ");
	scanf("%d",&class);
	printf("Enter your school\n> ");
	scanf("%s",school);
	printf("Enter your dream\n> ");
	scanf("%s",dream);
	printf("\nBelow is your introduction\n");
	
	printf("\nHi everyone, I am %s of %s. My father's name is %s and my mother's name is %s. I live in %s of %s. I am of %d years of age. I am in %d class of %s school. My hobby is %s. I have dream to become a %s\n",name,city,father,mother,city,state,age,class,school,hobby,dream);
	
	printf("\nDone \n=>Now exiting");
	return 0;
	}
