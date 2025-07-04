Simple Car Rental System 
This is a basic C++ console application simulating a simple car ride request system. The user can choose between two ride services—Taxi or Uber—and enter the distance to their destination in kilometers. Based on the user's inputs, the system confirms the ride if the distance is within a serviceable range (1 to 200 kilometers), or notifies the user if the destination is too far.

Key Features:
Ride Service Selection: Users can select between Taxi (1) or Uber (2).

Distance Input: Users enter the distance to their destination.

Service Availability Check: The system checks if the entered distance is within 200 km.

Dynamic Responses: Based on user input, the system responds with confirmation or a rejection message.

Sample Output:
pgsql
Копиране
Редактиране
What brand do you want to call to pick you up!
 taxi - 1
 uber - 2
Type the number
2
Thanks for picking uber!
Please enter the place 1 - 200 kilometers
150
Thanks for the information. We are on our way!
Possible Improvements:
Add more ride service brands.

Calculate fare based on distance and brand.

Validate user input for incorrect entries.

Use functions to modularize the code.

Add a user-friendly loop to allow multiple ride requests.

