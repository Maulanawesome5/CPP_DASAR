#include <iostream>

using namespace std;

int main()
{
    /* Deklarasi dan Input
     * Deklarasi Variabel adalah proses penentuan dan pembuatan nama variabel beserta tipe datanya.
     * Variabel bisa diberi nilai diawal, atau diberi nilai melalui input.
    */

    // deklarasi dulu tanpa nilai
    int tinggi_badan;
    float berat_badan;

    berat_badan = 65.5;
    cout << "Berapa tinggi badanmu? -> ";
    cin >> tinggi_badan; // memasukkan nilai dari input

    cout << "Kamu memiliki tinggi badan " << tinggi_badan << " cm. Dan berat badanmu adalah " << berat_badan << " kg." << endl;
    return 0;
}
