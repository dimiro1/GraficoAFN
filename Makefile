OBJS = Point.o Transicao.o

GraficoAFD: $(OBJS)
	$(CXX) -Wall $(OBJS) GraficoAFD.cpp -o GraficoAFD -lglut