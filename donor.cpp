//
//  main.cpp
//  donor.cpp
//
//  Created by Lulu Wang on 2018-01-18.
//  Copyright © 2018 Lulu Wang. All rights reserved.
//
//  Lulu Wang
//  UID: 904985789

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declare Variables
    string name;
    string gender;
    int age;
    int weight;
    int height;
    
    //Donor Name
    cout << "Donor Name: ";
    getline(cin, name);
    if (name == "")
    {
        cout << "--- You must enter a valid name." << endl;
        return (1);
    }
    
    //If gender is Male
    cout << "Gender: ";
    getline(cin, gender);
    if (gender == "Male")
    {
        cout << "Age: ";
        cin >> age;
        if (age <= 0)
        {
            cout << "--- You must enter a valid age." << endl;
            return (1);
        }
        else if (age < 16)
        {
            cout << "--- No, " << name << " you cannot donate blood." << endl;
            return (0);
        }
        else if ((age >= 16) && (age <= 22))    //Age Range between 16-22 (inclusive)
        {
            cout << "Weight: ";
            cin >> weight;
            if (weight <= 0)
            {
                cout << "--- You must enter a valid weight." << endl;
                return (1);
            }
            else if (weight < 110)
            {
                cout << "--- No, " << name << " you cannot donate blood." << endl;
                return (0);
            }
            cout << "Height: ";
            cin >> height;
            if (height <= 0)
            {
                cout << "--- You must enter a valid height." <<  endl;
                return (1);
            }
            else if (height < 60)
            {
                cout << "--- No, " << name << " you cannot donate blood." << endl;
                return (0);
            }
            else
            {
                cout << "---Yes, " << name << " you can donate blood." << endl;
                return (0);
            }
        }
        else
        {
            cout << "Weight: ";
            cin >> weight;
            if (weight <= 0)
            {
                cout << "--- You must enter a valid weight." << endl;
                return (1);
            }
            else if (weight < 110)
            {
                cout << "--- No, " << name << " you cannot donate blood." << endl;
                return (0);
            }
            cout << "Height: ";
            cin >> height;
            if (height <= 0)
            {
                cout << "--- You must enter a valid height." << endl;
                return (1);
            }
            else
            {
                cout << "---Yes, " << name << " you can donate blood." << endl;
                return (0);
            }
        }
    }
    
    //If gender is Female
    else if (gender == "Female")
    {
        cout << "Age: ";
        cin >> age;
        if (age <= 0)
        {
            cout << "--- You must enter a valid age." << endl;
            return (1);
        }
        else if (age < 16)
        {
            cout << "--- No, " << name << " you cannot donate blood." << endl;
            return (0);
        }
        else if ((age >= 16) && (age <= 22))
        {
            cout << "Weight: ";
            cin >> weight;
            if (weight <= 0)
            {
                cout << "--- You must enter a valid weight." << endl;
                return (1);
            }
            else if (weight < 110)
            {
                cout << "--- No, " << name << " you cannot donate blood." << endl;
                return (0);
            }
            cout << "Height: ";
            cin >> height;
            if (height <= 0)
            {
                cout << "--- You must enter a valid height." <<  endl;
                return (1);
            }
            else if (height < 58)
            {
                cout << "--- No, " << name << " you cannot donate blood." << endl;
                return (0);
            }
            else if (height == 58)
            {
                if (weight < 146)
                {
                    cout << "--- No, " << name << " you cannot donate blood." << endl;
                    return (0);
                }
                else
                {
                    cout << "---Yes, " << name << " you can donate blood." << endl;
                    return (0);
                }
            }
            else if (height == 59)
            {
                if (weight < 142)
                {
                    cout << "--- No, " << name << " you cannot donate blood." << endl;
                    return (0);
                }
                else
                {
                    cout << "---Yes, " << name << " you can donate blood." << endl;
                    return (0);
                }
            }
            else
            {
                cout << "---Yes, " << name << " you can donate blood." << endl;
                return (0);
            }
        }
        else
        {
            cout << "Weight: ";
            cin >> weight;
            if (weight <= 0)
            {
                cout << "--- You must enter a valid weight." << endl;
                return (1);
            }
            else if (weight < 110)
            {
                cout << "--- No, " << name << " you cannot donate blood." << endl;
                return (0);
            }
            cout << "Height: ";
            cin >> height;
            if (height <= 0)
            {
                cout << "--- You must enter a valid height." << endl;
                return (1);
            }
            else
            {
                cout << "---Yes, " << name << " you can donate blood." << endl;
                return (0);
            }
        }
    }
    
    //If gender is Trans Male, Trans Female, Queer, or Different
    else if ((gender == "Trans Male") || (gender == "Trans Female") || (gender == "Queer") || (gender == "Different"))
    {
        cout << "Age: ";
        cin >> age;
        if (age <= 0)
        {
            cout << "--- You must enter a valid age." << endl;
            return (1);
        }
        else if (age < 22)
        {
            cout << "--- No, " << name << " you cannot donate blood." << endl;
            return (0);
        }
        cout << "Weight: ";
        cin >> weight;
        if (weight <= 0)
        {
            cout << "--- You must enter a valid weight." << endl;
            return (1);
        }
        else if (weight < 110)
        {
            cout << "--- No, " << name << " you cannot donate blood." << endl;
            return (0);
        }
        cout << "Height: ";
        cin >> height;
        if (height <= 0)
        {
            cout << "--- You must enter a valid height." <<  endl;
            return (1);
        }
        else
        {
            cout << "--- Yes, " << name << " you can donate blood." << endl;
            return (0);
        }
    }
    else    //If gender is not one of 6 valid options
    {
        cout << "--- You must enter a valid gender." << endl;
        return (1);
    }
}








/*Feedback:

Lines: 78, 105, 161, 174, 180, 207
Case 7: There's a hierarchy of wrong data. Invalid data for ANY input must be addressed before data that results in a "No" response
    An invalid height should be addressed before a weight 0 < x < 110...
    RIP
*/
