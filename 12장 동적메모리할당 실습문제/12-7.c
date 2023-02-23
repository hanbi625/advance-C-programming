#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char** p = NULL;
    int i, row, col, j;
    char ch = 'a' - 1;

    scanf("%d %d", &col, &row);

    p = (char**)malloc(row * sizeof(char*));
    if (p == NULL)
        return -1;

    for (i = 0; i < row; i++) {
        p[i] = (char*)malloc(col * sizeof(char));
        if (p[i] == NULL)
            return -1;
    }
       
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            ch++;
            p[i][j] = ch;
            printf("%c ", p[i][j]);
            if (ch == 'z')
                ch = 'A' - 1;
            else if (ch == 'Z')
                ch = 'a' - 1;
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
        free(p[i]);
    free(p);

    return 0;
}

/*
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char** p = NULL;
	char ch = 'a';
	int row, col, i, j;

	scanf("%d %d", &col, &row);
	p = (char**)malloc(row * sizeof(char*));
	if (p == NULL)
		return -1;

	for (i = 0; i < row; i++) {
		p[i] = (char*)malloc(col * sizeof(char));
		if (p[i] == NULL)
			return -1;
		for (j = 0; j < col; j++) {
			p[i][j] = ch;
			if (ch == 'z')
				ch = 'A' - 1;
			if (ch == 'Z')
				ch = 'a' - 1;
			ch++;
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			printf("%c ", p[i][j]);
		printf("\n");
	}
	for (i = 0; i < row; i++)
		free(p[i]);
	free(p);
	p = NULL;

	return 0;
}
*/
