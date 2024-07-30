#include <cstdio>
#include <fstream>
#include <iostream>
#include <vector>

const int n_size = 28;
const int n_pixels = n_size * n_size;

uint8_t train_label[60000];
uint8_t test_label[10000];
float train_data[60000][n_pixels];
float test_data[10000][n_pixels];

template <size_t N>
void show(float (&data)[N][n_pixels], uint8_t (&label)[N]) {
  for (int i = 0; i < 10; i++) {
    printf("label = %d\n", label[i]);
    for (int ix = 0; ix < n_size; ix++) {
      for (int iy = 0; iy < n_size; iy++) {
        if (data[i][ix * n_size + iy] > 0.5) {
          printf("*");
        } else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }
}
void load_file(const char *filename, char *data) {
  std::ifstream file(filename, std::ios::binary);
  file.seekg(0, std::ios::end);
  std::streamsize size = file.tellg();
  file.seekg(0, std::ios::beg);
  std::size_t filesize = size / sizeof(uint8_t);
  file.read(data, filesize);
}

template <size_t N>
void load_data(const char *filename, float (&data)[N][n_pixels]) {
  std::ifstream file(filename, std::ios::binary);
  file.seekg(0, std::ios::end);
  std::streamsize size = file.tellg();
  file.seekg(0, std::ios::beg);
  std::size_t filesize = size / sizeof(uint8_t);
  std::vector<unsigned char> tmp(filesize);
  file.read(reinterpret_cast<char *>(tmp.data()), filesize);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < n_pixels; j++) {
      data[i][j] = float(tmp[i * n_pixels + j]) / 255.0;
    }
  }
}

int main() {
  load_data("mnist_train_data.dat", train_data);
  load_file("mnist_train_label.dat", reinterpret_cast<char *>(train_label));
  printf("Dump Training data\n");
  show(train_data, train_label);

  load_data("mnist_test_data.dat", test_data);
  load_file("mnist_test_label.dat", reinterpret_cast<char *>(test_label));
  printf("Dump Test data\n");
  show(test_data, test_label);
}