#include <iostream>
using namespace std;

void Print(int arr[], int n) //In mảng
{
    cout << "Cac phan tu ma ban da nhap: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Find(int arr[], int n)
{

    int x;
    int position = -1;
    do
    {
        cout << "Moi ban nhap phan tu muon tim: ";
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                position = i + 1;
                break;
            }

        }
        if (position == -1)
        {
            cout << "Moi ban nhap lai." << endl;
        }

    } while (position == -1);
    cout << "Thu tu cua phan tu " << x << "" << " trong mang la vi tri thu : " << position << endl;



}
void SortIncrease(int arr[], int n) //Sắp xếp tăng dần
{
    cout << "Cac phan tu theo thu tu tang dan" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void SortDecrease(int arr[], int n) //Sắp xếp giảm dần
{
    cout << "Cac phan tu theo thu tu giam dan" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void DeleteArray(int arr[], int n) //Xóa phần tử mảng
{
    int x;
    cout << "Nhap vi tri muon xoa: " << endl;
    cin >> x;
    for (int i = x - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
void InsertArray(int arr[], int n) //Thêm value 
{
    int position;
    int x;
    cout << "Them phan tu vao mang" << endl;
    cout << "Gia tri ban muon them vao" << endl;
    cin >> x;
    cout << "Vi tri ban muon them vao: " << endl;
    cin >> position;
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];

    }
    arr[position - 1] = x;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int CountElementArray(int** p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += 1;
    }
    return sum;
}

void Reverse(int arr[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    cout << ("Mang dao nguoc la: ");
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main() //LeMinhHieu 2001
{
    int n;
    int options;
    int arr[100];
    char c;
    do {
    again:

        cout << "So phan tu ban muon nhap: ";
        cin >> n;
        if (n > 100)
        {
            cout << "Ban chi duoc nhap ham trong khoang <=100" << endl;
            goto again;
        }

        for (int i = 0; i < n; i++)
        {
            cout << "Moi ban nhap phan tu thu " << i + 1 << ": ";
            cin >> arr[i];
        }

    tryagain:
        cout << "1. In tat ca phan tu." << endl;
        cout << "2. Sap xep theo thu tu tang dan." << endl;
        cout << "3. Dao nguoc mang." << endl;
        cout << "4. Chen 1 phan tu vao mang." << endl;
        cout << "5. Xoa 1 phan tu cua mang." << endl;
        cout << "6. Tim kiem 1 phan tu cua mang." << endl;
        cout << "0. Thoat." << endl;

        cin >> options;
        switch (options)
        {
        case 1: {
            Print(arr, n);
            break;
        }
        case 2: {
            SortIncrease(arr, n);
            break;
        }
        case 3: {
            Reverse(arr, n);
            break;
        }
        case 4: {
            InsertArray(arr, n);
            break;
        }
        case 5: {
            DeleteArray(arr, n);
            break;
        }

        case 6: {
            Find(arr, n);
            break;
        }
        case 0: {
            exit(0);
            break;
        }

        default: {
            cout << "Ban nhap options sai!!!" << endl;
        }
        }
        cout << "Ban muon tiep tuc hay khong? (Y/N)";
        cin >> c;
        if (c == 'y' || c == 'Y')
        {
            char c1;
            cout << "Ban muon su dung mang cu hay khong (Y/N)" << endl;
            cin >> c1;
            if (c1 == 'y' || c1 == 'Y')
            {
                goto tryagain;
            }
        }
//        if (c == 'n' || c == 'N') {
//            delete[] arr;
//        }
    } while (c == 'Y' || c == 'y');


}
