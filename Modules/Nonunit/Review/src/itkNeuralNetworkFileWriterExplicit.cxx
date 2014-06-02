#include "itkNeuralNetworkFileWriter.h"

template class itk::NeuralNetworkFileWriter<itk::Statistics::TwoHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >; //Instantiated 3 times
template class itk::NeuralNetworkFileWriter<itk::Statistics::OneHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >; //Instantiated 3 times
template class itk::NeuralNetworkFileWriter<itk::Statistics::MultilayerNeuralNetworkBase<itk::Vector<double, 2u>, itk::Vector<double, 1u>, itk::Statistics::LayerBase<itk::Vector<double, 2u>, itk::Vector<double, 1u> > > >; //Instantiated 3 times