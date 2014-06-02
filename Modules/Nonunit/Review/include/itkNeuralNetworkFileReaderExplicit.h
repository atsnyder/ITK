#ifndef __ExplicitInstantiation_itkNeuralNetworkFileReader_h__
#define __ExplicitInstantiation_itkNeuralNetworkFileReader_h__
extern template class itk::NeuralNetworkFileReader<itk::Statistics::TwoHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >;
extern template class itk::NeuralNetworkFileReader<itk::Statistics::OneHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >;
extern template class itk::NeuralNetworkFileReader<itk::Statistics::MultilayerNeuralNetworkBase<itk::Vector<double, 2u>, itk::Vector<double, 1u>, itk::Statistics::LayerBase<itk::Vector<double, 2u>, itk::Vector<double, 1u> > > >;
#endif //__ExplicitInstantiation_itkNeuralNetworkFileReader_h__