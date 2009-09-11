OBJS = Ponto.o Transicao.o Circulo.o

GraficoAFD: $(OBJS)
	$(CXX) -Wall $(OBJS) GraficoAFD.cpp -o GraficoAFD -lglut