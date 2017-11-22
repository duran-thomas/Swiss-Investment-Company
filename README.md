# Swiss-Investment-Company

In this phase, the system requires a password in order to access the system. The program should
be written such that the user has up to three attempts to log into the system. After three
unsuccessful attempts, the user should be locked out.
Upon successful entry, provide an attractive menu to the user with basic menu options such as
the one below:

INVESTMENT ORDER MANAGEMENT SYSTEM
 Prepare Investment Orders
 Display Investment Orders
 Search/Edit Investment Orders
 Exit

The requirements for each menu option are described below. Use attractive layouts for the
display of information. Please note that the menu should be re-displayed on the screen after
each menu selection until the user selects the Exit option.

Prepare Investment Order
Facilitate the entry of up to 15 orders. Note that they do not all have to be entered at one time
– that is – the user could enter 3 orders sequentially then exit this option, display the orders and
re-select this option to continue entering the remaining orders up to 15. Accept from the user
the following data ONLY: client’s account number, investment code and investment quantity.
Validate input for investment code and quantity according to the previous requirements. Assume
the company offers only one type of variable income investment with a standard rate of
$125.72. Fixed income and pooled stock investments remain as previously outlined. Use parallel
arrays to store the data.

Display Investment Orders
For all the orders entered so far in the system, display the client’s account number, investment
code and investment type (fixed income etc.), investment quantity and the value of each order
(as previously determined) and the cost of each order (exclude management and GCT charges).
In addition, output the following for each investment type - the number of orders made and
the cost of the orders. Also output an overall total of the number of orders in the system and
the total cost of all orders processed.


Search/Edit Investment Orders
Prompt the user for the client’s account number. The program should display the investment
order (client’s account number, investment code and investment quantity) where the client’s
account number matches the number entered. If the number has not been found in the array,
display an appropriate error message. If the number has been found, confirm whether the user
wishes to change the investment code and/or quantity. Validate the new entry/entries. If a
change is required, the program should display the client’s account number, previous investment
code and/or previous investment quantity, new investment code and/or new investment quantity
and the old and new value of the investment order, if applicable.
