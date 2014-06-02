#include "itkNeuralNetworkFileReader.h"

template class itk::NeuralNetworkFileReader<itk::Statistics::TwoHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >; //Instantiated 3 times
template class itk::NeuralNetworkFileReader<itk::Statistics::OneHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >; //Instantiated 3 times
template class itk::NeuralNetworkFileReader<itk::Statistics::MultilayerNeuralNetworkBase<itk::Vector<double, 2u>, itk::Vector<double, 1u>, itk::Statistics::LayerBase<itk::Vector<double, 2u>, itk::Vector<double, 1u> > > >; //Instantiated 3 times