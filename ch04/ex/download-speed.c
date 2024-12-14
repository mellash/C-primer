#include <stdio.h>

int main(void) {
  float download_speed;
  float file_size;

  printf("Enter download speed (Mbps): ");
  scanf("%f", &download_speed);
  printf("Enter file size(MB): ");
  scanf("%f", &file_size);

  float download_speed_in_MB = download_speed / 8;

  printf(
      "At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f "
      "seconds.\n",
      download_speed, file_size, file_size / download_speed_in_MB);

  return 0;
}
