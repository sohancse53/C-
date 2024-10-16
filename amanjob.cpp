#include <iostream>

using namespace std;

int main()
{
    cout << "\t \t \t \t \t \t \t Optimal Work Sequencing" << endl;
    int size_entries;
    cout << "Enter the size of entries: ";
    cin >> size_entries;
    int deadline[size_entries];
    int profit[size_entries];
    int index[size_entries];


    cout << "Enter the Profits: ";
    for (int i = 0; i < size_entries; i++)
    {
        cin >> profit[i];
    }
    cout << "Enter the Deadlines: ";
    for (int i = 0; i < size_entries; i++)
    {
        cin >> deadline[i];
    }
    for (int i = 0; i < size_entries; i++)
    {
        index[i] = i;
    }


    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (profit[j] < profit[j + 1])
            {
                swap(deadline[j], deadline[j + 1]);
                swap(profit[j], profit[j + 1]);
                swap(index[j], index[j + 1]);
            }
        }
    }


    int job_seq[5];
    for (int i = 1; i < 6; i++)
    {
        job_seq[i] = -1;
    }


    for (int i = 0; i < 7; i++)
    {
        if (job_seq[deadline[i]] == -1)
        {
            job_seq[deadline[i]] = index[i];
        }
        else
        {
            for (int j = deadline[i] - 1; j >= 0; j--)
            {
                if (job_seq[j] == -1)
                {
                    job_seq[j] = index[i];
                    break;
                }
            }
        }
    }


    cout << "The optimal work Sequence by index: ";
    for (int i = 1; i < 6; i++)
    {
        cout << job_seq[i] << " ";
    }
}