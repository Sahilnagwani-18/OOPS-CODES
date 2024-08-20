// Experiment 2. A department store places an order with a company for n pieces of miners, m pieces of
// toasters, and P number of fans. The cost of each item is as follows:
//  Miners: Rs. 1,500 per piece
//  Toaster: Rs. 200 per piece
//  Fan: Rs. 450 per piece
// The discount allowed for various items are 5% for miners, 15% for fan, and 10% for toaster.
// The company charge 10% as sales tax on all items on net value after deducting the discount.
// Write a program that reads m, n, and p and computer the amount to be paid by the store.


#include <iostream>
using namespace std;

// Structure to handle the order calculation
struct Order {
    double cost = 0;

    // Function to calculate the total cost after discounts and tax
    double calculate(int miners, int toasters, int fans) {
        // Cost calculation for miners after 5% discount
        double costMiners = miners * 1500 - (miners * 1500 * 0.05);
        
        // Cost calculation for toasters after 10% discount
        double costToasters = toasters * 200 - (toasters * 200 * 0.10);
        
        // Cost calculation for fans after 15% discount
        double costFans = fans * 450 - (fans * 450 * 0.15);
        
        // Total cost before tax
        cost = costMiners + costToasters + costFans;
        
        // Adding 10% sales tax to the total cost
        cost += cost * 0.10;

        return cost;
    }
};

int main() {
    int n, m, p;
    
    // Prompt the user to enter the quantity of each item
    cout << "Enter the number of miners: ";
    cin >> n;
    
    cout << "Enter the number of toasters: ";
    cin >> m;
    
    cout << "Enter the number of fans: ";
    cin >> p;
    
    // Create an Order object
    Order order;
    
    // Calculate the total cost
    double totalCost = order.calculate(n, m, p);
    
    // Display the total cost
    cout << "The total cost is Rs " << totalCost << endl;
    
    return 0;
}
