CXXFLAGS += --std=c++17
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

elsa: main.o mainwin.o entrydialog.o store.o customer.o option.o desktop.o order.o ram.o
	$(CXX) $(CXXFLAGS) main.o mainwin.o entrydialog.o store.o customer.o option.o desktop.o order.o ram.o $(GTKFLAGS) -o elsa
main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)
mainwin.o: mainwin.cpp *.h
	$(CXX) $(CXXFLAGS) -c mainwin.cpp $(GTKFLAGS)
entrydialog.o: entrydialog.cpp *.h
	$(CXX) $(CXXFLAGS) -c entrydialog.cpp $(GTKFLAGS)
store.o: store.cpp *.h
	$(CXX) $(CXXFLAGS) -c store.cpp
customer.o: customer.cpp *.h
	$(CXX) $(CXXFLAGS) -c customer.cpp
option.o: option.cpp *.h
	$(CXX) $(CXXFLAGS) -c option.cpp
desktop.o: desktop.cpp *.h
	$(CXX) $(CXXFLAGS) -c desktop.cpp
order.o: order.cpp *.h
	$(CXX) $(CXXFLAGS) -c order.cpp
ram.o: ram.cpp *.h
	$(CXX) $(CXXFLAGS) -c ram.cpp
clean:
	rm -f *.o *.gch elsa

	