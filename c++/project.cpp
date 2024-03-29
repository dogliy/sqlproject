

#include "stdafx.h"

/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "storeFunctions.h"

/*
Include directly the different
headers from cppconn/ and mysql_driver.h + mysql_util.h
(and mysql_connection.h). This will reduce your build time!
*/
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <boost/tokenizer.hpp>
#include <string>
#include "structures.h"
#include <ctime>


using namespace std;


int main(int argc, char *argv[])
{
	//showAllBooks(argv);

	//addBookOrder(argv);

	//selectSupplierOfBook(argv,1);




	int order;





	cout << "select:" << endl;
	cout << "1-show all books" << endl;
	cout << "2-show all open orders" << endl;
	cout << "3-show all customers" << endl;
	cout << "4-show all suppliers" << endl;
	cout << "5-show all order between dates" << endl;
	cout << "6-show all gloabl discount books" << endl;
	cout << "7-check stock" << endl;
	cout << "8-show all suppliers of Book" << endl;
	cout << "9-show all sales for book from date" << endl;
	cout << "10-book count Of books from date customer" << endl;
	cout << "11-show top customer by quantity from date" << endl;
	cout << "12-show top supplier by book count" << endl;
	cout << "13-show all order of books between dates" << endl;
	cout << "14-show all sold order of books between dates" << endl;
	cout << "15-total discount for customer from date" << endl;
	cout << "16-total discount for store in year" << endl;
	cout << "17-new customer from date" << endl;
	cout << "18-purchase amount from supplier between dates" << endl;
	cout << "19-total sell of sales man between dates" << endl;
	cout << "20-top ten books between dates" << endl;
	cout << "21-exit" << endl;
	cin >> order;

	while (order != 21)
	{
		switch (order)
		{
		case 1:
			showAllBooksOnStock(argv);
			break;
		case 2:
			showAllOpenOrders(argv);
			break;
		case 3:
			showAllCustomers(argv);
			break;
		case 4:
			showAllSuppliers(argv);
			break;
		case 5:
			showAllOrdersBetweenDates(argv);
			break;

		case 6:
			showAllGloablDiscountBooks(argv);
			break;
		case 7:
			checkStock(argv);
			break;
		case 8:
			showAllSuppliersOfBook(argv);
			break;
		case 9:
			showAllSalesForBookFromDate(argv);
			break;
		case 10:
			bookCountOfBooksFromDatecustomer(argv);
			break;
		case 11:
			showTopCustomerByQuantityFromDate(argv);
			break;
		case 12:
			showTopSupplierByBookCount(argv);
			break;
		case 13:
			showAllOrderOfBooksBetweenDates(argv);
			break;
		case 14:
			showAllSoldOrderOfBooksBetweenDates(argv);
			break;
		case 15:
			totalDiscountForCustomerFromDate(argv);
			break;
		case 16:
			totalDiscountForStoreInYear(argv);
			break;
		case 17:
			newCustomerFromDate(argv);
			break;
		case 18:
			purchaseAmountFromSupplierBetweenDates(argv);
			break;
		case 19:
			totalSellOfSalesmanBetweenDates(argv);
			break;

		case 20:
			topTenBooksBetweenDates(argv);
			break;

	
		}

		cout << "select:" << endl;
		cout << "1-show all books" << endl;
		cout << "2-show all open orders" << endl;
		cout << "3-show all customers" << endl;
		cout << "4-show all suppliers" << endl;
		cout << "5-show all order between dates" << endl;
		cout << "6-show all gloabl discount books" << endl;
		cout << "7-check stock" << endl;
		cout << "8-show all suppliers of Book" << endl;
		cout << "9-show all sales for book from date" << endl;
		cout << "10-book count Of books from date customer" << endl;
		cout << "11-show top customer by quantity from date" << endl;
		cout << "12-show top supplier by book count" << endl;
		cout << "13-show all order of books between dates" << endl;
		cout << "14-show all sold order of books between dates" << endl;
		cout << "15-total discount for customer from date" << endl;
		cout << "16-total discount for store in year" << endl;
		cout << "17-new customer from date" << endl;
		cout << "18-purchase amount from supplier between dates" << endl;
		cout << "19-total sell of sales man between dates" << endl;
		cout << "20-top ten books between dates" << endl;
		cout << "21-exit" << endl;
		cin >> order;

	}















	cout << "end" << endl;



}



