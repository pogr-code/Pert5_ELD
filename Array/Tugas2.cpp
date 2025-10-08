#include <iostream>
#include <vector>
#include <string>
using namespace std;
using pii = pair<string,int>;

// 1) hapus semua entri dengan harga <= 0
void bersihkan(vector<pii>& v){
    vector<pii> t;
    t.reserve(v.size());
    for(size_t i=0;i<v.size();++i){
        if(v[i].second > 0) t.push_back(v[i]);
    }
    v = t;
}

// 2) jika ada nama sama, pertahankan harga TERAKHIR
void hapusduplikat(vector<pii>& v){
    vector<pii> dariBelakang;       // simpan unik saat scan dari belakang
    for(int i=(int)v.size()-1;i>=0;--i){
        const string& nama = v[i].first;
        bool sudahAda = false;
        for(size_t j=0;j<dariBelakang.size();++j){
            if(dariBelakang[j].first == nama){ sudahAda = true; break; }
        }
        if(!sudahAda) dariBelakang.push_back(v[i]); // ini adalah kemunculan terakhir
    }
    // balik urutan supaya kembali ke urutan kiri→kanan
    vector<pii> hasil;
    hasil.reserve(dariBelakang.size());
    for(int i=(int)dariBelakang.size()-1;i>=0;--i){
        hasil.push_back(dariBelakang[i]);
    }
    v = hasil;
}

// 3) cetak jumlah barang unik, harga min, max, rata2
void ringkasan(const vector<pii>& v){
    if(v.empty()){
        cout << "Data kosong!\n";
        return;
    }
    int minH = v[0].second;
    int maxH = v[0].second;
    double total = 0.0;

    for(size_t i=0;i<v.size();++i){
        int h = v[i].second;
        if(h < minH) minH = h;
        if(h > maxH) maxH = h;
        total += h;
    }
    double rata = total / (double)v.size();

    cout << "Jumlah barang unik: " << v.size() << "\n";
    cout << "Harga minimum: "     << minH      << "\n";
    cout << "Harga maksimum: "    << maxH      << "\n";
    cout << "Harga rata-rata: "   << rata      << "\n";
}

int main(){
    vector<pii> data={{
        {"apel",2000},{"jeruk",1500},{"apel",-100},
        {"mangga",3000},{"jeruk",1500},{"pisang",0},
        {"apel",2500},{"mangga",3000}
    }};

    bersihkan(data);
    hapusduplikat(data);
    ringkasan(data);
    return 0;
}
