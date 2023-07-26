#include <iostream>

using namespace std;

int main()
{
    //kılavyeden en az 3 karakter uzunluğunda kullanıcı adı ve an az 6 karakter uzunluğunda şifre bilgilerine bizden giriş isteyen 3 kullanım hakkı sunan.
    //bunun sonucunda "Giriş Başarılı" veya "Giriş Başarısız" şeklinde mesaj vericek .3 defa hatalı girişte "Şifre Bloke Edildi" mesajı ile program sonlanacaktır.
    //şifre belirleme kıriterleri sağlanmadan sonraki aşamaya geçilmeyecektir.
    //kullanıcı adı ve şifre doğru girildiğinde program sonlanacaktır.
    
    string username, password;
    int counter = 0;

    while (counter < 3)
    {
        cout << "Kullanici adi: ";
        cin >> username;
        cout << "Sifre: ";
        cin >> password;

        if (username.length() < 3 || password.length() < 6) //username.length() yerine username.size() de kullanılabilir çünkü ikisi de aynı şeyi döndürür (stringin uzunluğunu)
        {
            cout << "Kullanici adi en az 3 karakter, sifre en az 6 karakter olmalidir." << endl;
            counter++;
        }
        else if (username.length() >= 3 && password.length() >= 6)
        {
            if(username == "talha" && password == "123456")
            {
                cout << "Giris Basarili" << endl;
                break;
            }
            else
            {
                cout << "Giris Basarisiz" << endl;
                counter++;
            }
        }
    }

    if (counter == 3)
    {
        cout << "Sifre Bloke Edildi" << endl;
    }

    return 0;
}