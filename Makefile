OBJS = Drawable.o Transition.o Circle.o Rectangle.o Color.o ApplicationResource.o

AFD: $(OBJS)
	$(CXX) -Wall $(OBJS) AFD.cpp -o AFD -lglut