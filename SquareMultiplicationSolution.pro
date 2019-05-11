TEMPLATE = subdirs  
SUBDIRS += SquareMultiplicationApp \
    SquareMultiplicationTest \
    SquareMultiplicationLib

SquareMultiplicationApp.depends = SquareMultiplicationLib
SquareMultiplicationTest.depends = SquareMultiplicationLib
