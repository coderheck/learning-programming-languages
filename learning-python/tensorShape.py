# t1 = [15,17,10,26,14,12,11,13]
# t2 = [12,19,15,24,13,14,8,11]
# n = len(t1)
# t = 0
# for i in range(0,n):
#     t += (t2[i]-t1[i])**2
# print(1/n * t)

import tensorflow as tf
input_tensor = tf.constant(tf.random.normal (shape=(1, 32, 32, 3)), dtype=tf.float32)

conv_layer = tf.keras.layers.Conv2D(filters=32, kernel_size=(5,5), strides=(2,2),padding='same')

output_tensor = conv_layer(input_tensor)

print(output_tensor.shape)
