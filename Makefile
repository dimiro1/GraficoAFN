OBJS = Drawable.o Transition.o Circle.o Rectangle.o Color.o ApplicationResource.o Line.o

AFD: $(OBJS)
	$(CXX) -Wall $(OBJS) AFD.cpp -o AFD -lglut