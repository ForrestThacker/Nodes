
#include "NodeController.h"
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController::start()
{
	arrayTimer.startTimer();

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index *  23));
	}

	for(int index = notHipsterInts->getSize()-1; index >= 0; index--)
	{
		cout << "notHipsterInts at index " << index << " contains " << notHipsterInts->get(index); << std::endl;
	}

	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}
