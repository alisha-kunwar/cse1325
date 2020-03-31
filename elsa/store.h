#ifndef _STORE_H
#define _STORE_H


#include <iostream>
#include <exception>
#include <string>
#include <vector>

#include "order.h"
#include "options.h"
#include "customer.h"

class Store
{
	private:
	std::vector<Customer> customers;
	std::vector<Options*> options;
	std::vector<Desktop> desktops;
	std::vector<Order> orders;
	
	public:
	void add_customer(Customer& customer);
	int num_customers;
	Customer& customer(int index);
	void add_option(Options& option)
	int num_options();
	Options& option(int index);
	int new_desktop();
	void add_option(int option, int desktop);
	int num_desktops();
	Desktop& desktop(int index);
	int new_order(int customer);
	void add_desktop(int desktop, int order);
	int num_orders();
	Order& order(int index);
#endif	