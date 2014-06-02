#ifndef __ExplicitInstantiation_itkNeuralNetworkFileWriter_h__
#define __ExplicitInstantiation_itkNeuralNetworkFileWriter_h__
extern template class itk::NeuralNetworkFileWriter<itk::Statistics::TwoHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >;
extern template class itk::NeuralNetworkFileWriter<itk::Statistics::OneHiddenLayerBackPropagationNeuralNetwork<itk::Vector<double, 2u>, itk::Vector<double, 1u> > >;
extern template class itk::NeuralNetworkFileWriter<itk::Statistics::MultilayerNeuralNetworkBase<itk::Vector<double, 2u>, itk::Vector<double, 1u>, itk::Statistics::LayerBase<itk::Vector<double, 2u>, itk::Vector<double, 1u> > > >;
#endif //__ExplicitInstantiation_itkNeuralNetworkFileWriter_h__