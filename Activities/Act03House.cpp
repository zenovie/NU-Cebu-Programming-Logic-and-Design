/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
A construction company needs a program that estimates the total cost of constructing
a house. The user will provide the dimensions of the house, number of rooms, number
of doors and windows, floor tile cost per square meter, wall paint cost per square
meter, roofing cost per square meter, electrical cost per square meter, plumbing 
cost per square meter, door price, window price, construction equipment rental,
transportation cost, and contractor overhead percentage. the program must calculate
the floor area, wall area, roofing area, flooring material cost, painting cost,
roofing cost, electrical cost, plumbing cost, door cost, window cost, labor cost,
equipment cost, transportation cost, subtotal, contractor overhead, and final 
construction cost.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    //declare variables
    double houseLength = 0.0, houseWidth = 0.0, wallHeight = 0.0, numberRooms = 0.0, numberDoors = 0.0, numberWindow = 0.0, floortileCost = 0.0, wallpaintCost = 0.0, roofCost = 0.0, electricalCost = 0.0, plumbingCost = 0.0, laborCost = 0.0, doorPrice = 0.0, windowPrice = 0.0, equipPrice = 0.0, transpoPrice = 0.0, contractOverhead = 0.0;
    double floorArea = 0.0, wallArea = 0.0, roofArea = 0.0, flooring = 0.0, painting = 0.0, roofing = 0.0, electrical = 0.0, plumbing = 0.0, labor = 0.0, doors = 0.0, window = 0.0, equipment = 0.0, transportation = 0.0;
    double subtotal = 0.0, contractorOverhead = 0.0, totalCost = 0.0;

    //input
    cout << "House Length (m)           : ";
    cin >> houseLength;

    cout << "House Width (m)            : ";
    cin >> houseWidth;

    cout << "Wall Height (m)            : ";
    cin >> wallHeight;

    cout << "Number of Rooms            : ";
    cin >> numberRooms;

    cout << "Number of Doors            : ";
    cin >> numberDoors;

    cout << "Number of Windows          : ";
    cin >> numberWindow;

    cout << "Floor Tile Cost/sq.m       : ";
    cin >> floortileCost;

    cout << "Wall Paint Cost/sq.m       : ";
    cin >> wallpaintCost;

    cout << "Roofing Cost/sq.m          : ";
    cin >> roofCost;

    cout << "Electrical Cost/sq.m       : ";
    cin >> electricalCost;

    cout << "Plumbing Cost/sq.m         : ";
    cin >> plumbingCost;

    cout << "Labor Cost                 : ";
    cin >> laborCost;

    cout << "Door Price                 : ";
    cin >> doorPrice;

    cout << "Window Price               : ";
    cin >> windowPrice;

    cout << "Equipment Rental           : ";
    cin >> equipPrice;

    cout << "Transportation             : ";
    cin >> transpoPrice;

    cout << "Contractor Overhead (%)    : ";
    cin >> contractOverhead;

    //calculate
    floorArea = houseLength * houseWidth;
    wallArea = numberRooms * (houseLength + houseWidth) * wallHeight;
    roofArea = floorArea * 1.15;
    flooring = floorArea * floortileCost;
    painting = wallArea * wallpaintCost;
    roofing =  roofArea * roofCost;
    electrical = floorArea * electricalCost;
    plumbing = floorArea * plumbingCost;
    labor = laborCost * floorArea;
    doors = doorPrice * numberDoors;
    window = windowPrice * numberWindow;
    equipment = equipPrice;
    transportation = transpoPrice;
    subtotal = flooring + painting + roofing + electrical + plumbing + labor + doors + window + equipment + transportation;
    contractorOverhead = subtotal * (contractOverhead / 100);
    totalCost = subtotal + contractorOverhead;

    //output
    cout<<fixed<<(setprecision(2));
    cout << "\n\n===================================" << endl;
    cout << "   HOUSE CONSTRUCTION ESTIMATE     " << endl;
    cout << "===================================" << endl;
    cout << "Floor Area: " << floorArea << "sq.m" << endl;
    cout << "Wall Area: " << wallArea << "sq.m" << endl;
    cout << "Roof Area: " << roofArea << "sq.m" << endl;
    cout << "\nFlooring: " << flooring << endl;
    cout << "Painting: " << painting << endl;
    cout << "Roofing: " << roofing << endl;
    cout << "Electrical: " << electrical << endl;
    cout << "Plumbing: " << plumbing << endl;
    cout << "Labor: " << labor << endl;
    cout << "Doors: " << doors << endl;
    cout << "Windows: " << window << endl;
    cout << "Equipment: " << equipment << endl;
    cout << "Transportation: " << transportation << endl;
    cout << "\nSubtotal: " << subtotal << endl;
    cout << "Contractor Overhead: " << contractorOverhead << endl;
    cout << "TOTAL CONSTRUCTION COST: " << totalCost << endl;

    return 0;
}