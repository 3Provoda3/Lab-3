#include <stdio.h>
#include <string.h>

int main() {
    int episode_number;

    printf("Введіть номер серії: ");
    scanf("%d", &episode_number);

    //використовуємо оператор switch для визначення назви та дати прем'єрного показу серії
    switch (episode_number) {
        case 1:
        printf("Назва серії: 'El comienzo'\n");
        printf("Дата прем'єрного показу: 25 квітня 2019\n");
        break;
          case 2:
            printf("Назва серії: 'La fuga'\n");
            printf("Дата прем'єрного показу: 2 травня 2019\n");
            break;
        case 3:
            printf("Назва серії: 'La despedida'\n");
            printf("Дата прем'єрного показу: 9 травня 2019\n");
            break;
        case 4:
            printf("Назва серії: 'La gran oportunidad'\n");
            printf("Дата прем'єрного показу: 16 травня 2019\n");
            break;
              case 5:
            printf("Назва серії: 'El testigo'\n");
            printf("Дата прем'єрного показу: 23 травня 2019\n");
            break;
        case 6:
            printf("Назва серії: 'La operación'\n");
            printf("Дата прем'єрного показу: 30 травня 2019\n");
            break;
        case 7:
            printf("Назва серії: 'El golpe'\n");
            printf("Дата прем'єрного показу: 6 червня 2019\n");
            break;
        case 8:
            printf("Назва серії: 'La huida'\n");
            printf("Дата прем'єрного показу: 13 червня 2019\n");
            break;
        case 9:
            printf("Назва серії: 'El infiltrado'\n");
            printf("Дата прем'єрного показу: 20 червня 2019\n");
        case 10:
            printf("Назва серії: 'La traición'\n");
            printf("Дата прем'єрного показу: 27 червня 2019\n");
        case 11:
            printf("Назва серії: 'La encerrona'\n");
            printf("Дата прем'єрного показу: 4 липня 2019\n");
        case 12:
            printf("Назва серії: 'La emboscada'\n");
            printf("Дата прем'єрного показу: 11 липня 2019\n");
        case 13:
            printf("Назва серії: 'El final'\n");
            printf("Дата прем'єрного показу: 18 липня 2019\n");
            break;
        default:
            printf("Невірний номер серії\n");
        
    }
    return 0;
}