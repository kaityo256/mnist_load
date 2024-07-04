import tensorflow as tf
import numpy as np
import struct


def main():
    train, test = tf.keras.datasets.mnist.load_data()
    train_data, train_label = train
    test_data, test_label = test
    train_data.tofile("mnist_train_data.dat")
    print("Dumped as mnist_train_data.dat")
    train_label.tofile("mnist_train_label.dat")
    print("Dumped as mnist_train_label.dat")
    test_data.tofile("mnist_test_data.dat")
    print("Dumped as mnist_test_data.dat")
    test_label.tofile("mnist_test_label.dat")
    print("Dumped as mnist_test_label.dat")


if __name__ == "__main__":
    main()
