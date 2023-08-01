#include <iostream>

using namespace std;

int main()
{
    // Kalıtım (Inheritance)
    // Bir sınıfın başka bir sınıftan türetilmesi işlemine kalıtım denir.
    // Kalıtım sayesinde sınıflar arasında bir hiyerarşi oluşturulur.

    // Kalıtımın sağladığı avantajlar:
    // 1. Kod tekrarını önler.
    // 2. Kodun yeniden kullanılabilirliğini arttırır.
    // 3. Kodun okunabilirliğini arttırır.
    // 4. Kodun bakımını kolaylaştırır.

    // Kalıtımın sağladığı dezavantajlar:
    // 1. Kodun karmaşıklığını arttırır.
    // 2. Kodun anlaşılabilirliğini azaltır.

    // Kalıtımın kullanımı:
    // class Alt_Sınıf : public Üst_Sınıf // Public Kalıtım
    // {
    //     ...
    // };

    // Kalıtımın türleri:
    // 1. Public Kalıtım
    // 2. Protected Kalıtım
    // 3. Private Kalıtım

    // Public Kalıtım
    // Public kalıtım sayesinde üst sınıfın public ve protected elemanları alt sınıfın public ve protected elemanları haline gelir.
    // Private elemanlar kalıtım ile alt sınıfa aktarılmaz.

    // Protected Kalıtım
    // Protected kalıtım sayesinde üst sınıfın public ve protected elemanları alt sınıfın protected elemanları haline gelir.
    // Private elemanlar kalıtım ile alt sınıfa aktarılmaz.

    // Private Kalıtım
    // Private kalıtım sayesinde üst sınıfın public ve protected elemanları alt sınıfın private elemanları haline gelir.
    // Private elemanlar kalıtım ile alt sınıfa aktarılmaz.
   
}