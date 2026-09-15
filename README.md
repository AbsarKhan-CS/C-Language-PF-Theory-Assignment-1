# C-Language-PF-Theory-Assignment-1
Question 1 Hotel Booking System

A hotel processes booking requests for N guests. For each guest, take the season (Peak or Off-
Peak) and room type (Standard, Deluxe, or Suite) as input, and apply nested pricing logic: Peak

season charges a higher base rate per room type, and Off-Peak charges a lower rate. In addition, if
a guest stays more than 7 nights, a long-stay discount applies regardless of season. Display the
final price for each guest and the hotel's total revenue after all guests have been processed.
• The loop runs for N guests (for example, N = 4).
• Peak season rates: Standard = Rs. 5,000/night, Deluxe = Rs. 8,000/night, Suite = Rs.
12,000/night.
• Off-Peak rates: Standard = Rs. 3,000/night, Deluxe = Rs. 5,000/night, Suite = Rs. 8,000/night.
• If nights stayed exceed 7, apply a flat 15 percent long-stay discount to the total, regardless of
season.
• Total price = (rate × nights) − discount, where applicable.
• Accumulate every guest's total into a running Hotel Total Revenue figure, displayed after the
loop ends.

Question 02 Elevator Simulation
An elevator starts at the ground floor and receives a list of floor requests, processed one at a time
in a loop. For each request, compare it to the elevator's current floor: if the requested floor is higher,
print "Moving Up"; if lower, print "Moving Down"; if the same, print "Doors Opening." Update
the current floor after each stop.
• The elevator starts at Floor 0.
• The loop processes a list of N floor requests (for example, N = 5 requests: 3, 1, 5, 2, 2).
• Requested floor greater than current floor → "Moving Up".
• Requested floor less than current floor → "Moving Down".
• Requested floor equal to current floor → "Doors Opening".
• Update the current floor to the requested floor after each stop.


Question 03 Class Result Processing
A school processes results for a class of N students. Each student has 5 subject marks, which must
be summed and averaged. After computing the average, classify the student: average of 80 or
above is "Distinction", 60 or above (but below 80) is "Pass", and below 60 is "Fail". In addition,
if the student failed any single subject (a mark below 33), override the result to "Fail — Subject
Deficiency", even if the average alone would otherwise pass.
• The loop runs for N students (for example, N = 3), each with 5 subject marks out of 100,
processed by an inner loop.
• Average = sum of the 5 marks divided by 5.
• Average of 80 or above → "Distinction".
• Average of 60 or above and below 80 → "Pass".
• Average below 60 → "Fail".
• Override: if any single subject mark is below 33, the result becomes "Fail — Subject
Deficiency", even if the average is 60 or above.


Question 04 Online Shopping Bill Calculator
An online shopping company wants to develop a simple Shopping Bill Calculator for its customers.
When a customer purchases products, the system calculates the final amount in several stages. The
calculations are dependent on one another: the result produced by one function is used by the next
function.
Mathematical Functions Used
The system uses the following three mathematical functions.
• Subtotal: s = q × p, where q is the quantity purchased and p is the price per item.
• Discounted Amount=s − (s × d) / 100, where s is the subtotal.
• Final Bill= a + (a × t) / 100, where a is the discounted amount and t is the tax percentage.

Requirement:
• Ask the customer to enter the quantity of products purchased.
• Ask for the price per item.
• Ask for the discount percentage.
• Ask for the tax percentage.
• Validate the entered values; if any value is invalid, display an appropriate error message and
terminate the calculation.
• Store the calculation details, generate a bill document, and display the final bill to the customer
before ending the program.


Question 05 Smart Campus Parking and Access Management System
A university is developing a Smart Campus Parking and Access Management System to control
vehicle entry, assign parking spaces, and monitor parking capacity during the day. The university
has three parking zones: Zone A (Faculty) with a maximum capacity of 20 vehicles, Zone B
(Students) with a maximum capacity of 40 vehicles, and Zone C (Visitors) with a maximum
capacity of 15 vehicles. The security officer enters the number of vehicles that are expected to
arrive during the current operating period. The system must process each vehicle one at a time and
ask for its vehicle type (C for car, B for bike, or V for van), user category (F for faculty, S for
student, or G for visitor/guest), and whether the vehicle has a valid parking permit (Y or N). The
system must validate every entered value before processing the vehicle. Invalid vehicle types,
categories, or permit values must be rejected and the user must be asked to enter the information
again. A vehicle with an invalid combination of information must not be counted as successfully
processed.
For each valid vehicle, the system must determine its parking eligibility according to the following
rules.
• Faculty members with a valid permit may park in Zone A.
• Students with a valid permit may park in Zone B.
• Visitors with a valid visitor permit may park in Zone C.
• A faculty member arriving in a van may use Zone A only if space is available.
• Student arriving in a van must be redirected to Zone C if the visitor zone has available space;
otherwise, the vehicle is rejected.
• Bikes belonging to students with a valid permit may also use Zone B.
• Bikes belonging to faculty members with a valid permit may use Zone A.
• Visitors arriving by car or bike with a valid permit may use Zone C.
• Visitors arriving by van may use Zone C only when at least two spaces are available, because
a van occupies two parking spaces.
• Any vehicle without a valid permit must be rejected unless it is an emergency vehicle;
therefore, the system must additionally ask whether the vehicle is an emergency vehicle (Y or
N). An emergency vehicle may enter regardless of its permit status, but it must be assigned to
the appropriate zone based on the user category.

• A van assigned to Zone C consumes two parking spaces, whereas every car or bike consumes
one space.
The system must continuously maintain the number of occupied spaces in each zone. Before
assigning a vehicle, it must check whether sufficient capacity is available. If the required capacity
is not available in the preferred zone, the system should apply the alternative-zone rules where
applicable; otherwise, the vehicle must be rejected. For every successfully parked vehicle, the
system should display the assigned zone and the remaining capacity of that zone. For every rejected
vehicle, the system should display the reason for rejection, such as invalid permit, no available
space, or no suitable zone. The system must also maintain counters for successfully parked cars,
bikes, and vans, as well as rejected vehicles. Because multiple vehicles are processed, the program
must use a loop, and because the system must repeatedly validate information and may need to
examine the available zones before making an assignment, students are expected to use nested
decisions, nested loops, and appropriate combinations of decisions and loops.
Requirement:
Show parking summary which includes:
• The total number of vehicles processed,
• Total accepted vehicles, total rejected vehicles,
• the number of cars, bikes,
• vans successfully parked, and the final occupancy and
• remaining capacity of each parking zone.
• Display the zone with the highest occupancy and indicate whether the entire campus parking
facility is full.


Question 06 Smart EV Charging and Parking Management System
An urban shopping mall is developing a Smart EV Charging and Parking Management System.
When an electric vehicle arrives, the system must determine whether to admit it, which charging
category to assign, and how much the customer should pay.
The system asks the driver for:
• Vehicle type: E = Electric Vehicle, H = Hybrid Vehicle.
• Battery charge level (SOC) as a percentage.
• Required charging level as a percentage.
• Expected parking duration in hours.
• Current time in 24-hour format.
• Whether the customer has a parking membership (Y/N).
• Whether the customer has disabled-person priority status (Y/N).
• Whether the charging station is currently available (Y/N).
The system should make decisions according to the following rules.

• If the charging station is unavailable: if the vehicle is a hybrid, display "Charging unavailable
– Parking only." Otherwise, display "No charging slot available." If the station is available,
continue with the remaining checks.
• A fully electric vehicle (E) can use the charging station. A hybrid vehicle (H) can use the
charging station only if its battery level is below 40 percent. Otherwise, display "Vehicle does
not qualify for EV charging.
• Calculate Required Charging = Required Charging Level − Current Battery Level. If the
required charging level is less than or equal to the current battery level, display "No charging
required." Otherwise, continue.
• The system assigns a priority category, in the order given below.
oPriority 1 — Emergency Charging: if battery level is 15 percent or below, and required
charging level is 80 percent or above, assign "Emergency Charging Priority."
oPriority 2 — Priority Customer: if the vehicle does not satisfy the emergency condition,
but disabled-person priority is Y, or membership is Y and battery level is 30 percent or
below, assign "Priority Charging."
oPriority 3 — Normal Charging: otherwise, assign "Normal Charging."
• The mall uses different charging rates.
o Off-peak (before 5 PM or after 10 PM): Rs. 35 per charging unit. If the customer is a
member, they receive a 20 percent discount during off-peak hours.
oPeak (5 PM to 10 PM): Rs. 50 per charging unit, with a 10 percent discount during peak
hours.
o No membership discount is provided for Emergency Charging Priority.
• Parking charges are calculated separately from charging charges.
oFirst 2 hours: Rs. 200.
o More than 2 and up to 5 hours: Rs. 400.
o More than 5 hours: Rs. 700.
• A member receives an additional 20 percent parking discount. Disabled-person priority
customers receive free parking. Free parking applies only to parking charges, not to
electricity/charging charges.
• If the expected parking duration is more than 8 hours, display "Long-stay warning: Please
relocate your vehicle after charging." Otherwise, display "Standard parking duration."
Requirements:
The system should display:
• Vehicle type
• current battery percentage
• Required charging percentage
• Charging priority, peak/off-peak status
• Charging cost, parking cost, discount,
• Final payable amount
• Appropriate warning/message.


