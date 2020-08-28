#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    int *dst = NULL;
    int j = 0;
    int count = 0;
    int tmp = 0;

    for (int i = 0; i < src_size; i++) {
        for (j = i + 1; j < src_size; j++)
            if (src[i] == src[j])
                count++;
    }
    *dst_size = src_size - count;
    printf("%d", *dst_size);
    dst = mx_copy_int_arr(src, *dst_size);
    //printf("%d  %d  %d  %d  %d", dst[0], dst[1] ,dst[2], dst[3], dst[4]);
      
	for(int a = 1; a < src_size; a++){
		for(int k = a; k > 0 && src[k - 1] > src[k];k--){
			//if (src[k] != src[k - 1]) {
			tmp = src[k-1];
			src[k-1]=src[k];
			src[k]=tmp;
            
        }
    }
    printf("%d  %d  %d  %d  %d", src[0], src[1], src[2], src[3], src[4]);
    // for (int i = 0; i < src_size; i++) {
    //     for (j = i + 1; j < src_size; j++)
    //         if (src[i] == src[j])
    //             j++;
    //     dst[i] = src[j];
    // }
    // dst = mx_copy_int_arr(dst, *dst_size);
    return dst;
}

int main() {
    int src[7] = {1, 1, 2, 3, 4, 4, 5};
    int dst_size = 0;
    int *ku = NULL;

    ku = mx_del_dup_arr(src, 7, &dst_size);

    for (int i = 0; i < dst_size; i++)
         printf("%d", ku[i]); 
}
