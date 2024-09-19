#include <stdio.h> 
#include <stdlib.h>


int main() {
    char names[10][30];
    int bg_index;
    float grades[10], low_grade_c = 0, high_grade_c = 0, best_grade = 0, mid = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do aluno:  ");
        fgets(names[i],sizeof(names[i]),stdin);
        printf("\nDigite a nota de aluno:  ");
        scanf("%d", &grades[i]);
        printf("\n =========================================================== \n");
        mid += grades[i];
    }
    mid /= 10;
    for (int i = 0; i < 10; i++) {
        if (grades[i] < 5) low_grade_c++;
        if (grades[i] > mid) high_grade_c++;
        if ( grades[i] > best_grade) {
            best_grade = grades[i];
            bg_index = i;
        }
    }
    printf("\n\nA quantidade das alunos com a nota abaixo do 5: %.2f alunos\nA media das notas de alunos: %.2f\nA quantidade dos alunos com a nota acima da media: %.2f alunos\nA maior nota entre todos os alunos foi %.2f do aluno %s\n\n", low_grade_c, high_grade_c, mid, best_grade, names[bg_index]);
    return 0;
}
