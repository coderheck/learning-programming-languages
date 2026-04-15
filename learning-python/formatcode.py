from sklearn.feature_extraction.text import CountVectorizer
from sklearn.model_selection import train_test_split
import torch
import torch.nn as nn
import torch.optim as optim

texts = ["I love this movie", "I hate this product",
"Amazing quality", "Terrible service"]
labels = [1, 0, 1, 0]

vectorizer = CountVectorizer ()
X = vectorizer. fit_transform (texts) . toarray ()
y = torch. tensor (labels)

X_train, X_test, y_train, y_test = train_test_split(X, y,
test_size=0.25)

X_train = torch.tensor (X_train, dtype=torch. float32)