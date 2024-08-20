// Experiment 1. Suppose the postal rates for mailing letters are as follows:
//  Rs. 0.50 per 10 grams for the first 50 grams,
//  Rs. 0.40 per 10 grams for the next 100 grams,
//  Rs. 0.25 per 10 grams for the next 250 grams, and
//  Rs 25 per kilogram for letters weighing more than 400 grams.
// Write a program that prompts for the weight of a letter and prints the postage to be
//  paid.

#include <iostream>
using namespace std;

// Structure to handle mail postage calculation
struct Mail {
    // Function to calculate postage based on weight
    double calculate(int weight) const {
        // Check if weight is more than 400 grams
        if (weight > 400) {
            return 25.0 * (weight / 1000.0); // Rate: Rs 25 per kilogram for weight > 400 grams
        } else {
            // Calculate cost for weight up to 50 grams
            if (weight <= 50) {
                return (weight / 10.0) * 0.50; // Rate: Rs 0.50 per 10 grams for the first 50 grams
            }
            // Calculate cost for weight between 51 and 150 grams
            else if (weight <= 150) {
                return 5 * 0.50 + ((weight - 50) / 10.0) * 0.40; // Rs 0.50 for the first 50 grams + Rs 0.40 per 10 grams for the next 100 grams
            }
            // Calculate cost for weight between 151 and 400 grams
            else {
                return 5 * 0.50 + 10 * 0.40 + ((weight - 150) / 10.0) * 0.25; // Rs 0.50 for the first 50 grams + Rs 0.40 for the next 100 grams + Rs 0.25 per 10 grams for the next 250 grams
            }
        }
        return 0; // Default case, should not reach here
    }
};

int main() {
    int weight;
    cout << "Enter the weight of the letter in grams: ";
    cin >> weight; // Prompt user to enter the weight of the letter

    Mail m; // Create a Mail object
    double totalCost = m.calculate(weight); // Calculate the total postage cost
    cout << "Total postage cost: Rs " << totalCost << endl; // Display the total postage cost

    return 0;
}
