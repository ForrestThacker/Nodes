
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
    
    void NodeController::doMergesort()
    {
        mergeData = new int[500000];
        
        for(int spot = 0; spot < 500000, spot++)
        {
            int myRandom = rand();
            mergeData[spot] =myRandom;
        }
        for ( int spot = 0; spot < 5000; spot++)
        {
            cout << mergeData[spot] << ",";
        }
        
        Timer mergeTimer;
        mergeTimer.startTimer();
        mergesort(mergeData 500000);
        mergeTimer.stopTimer();
        mergeTimer.displayTimerInformation();
        
        for (spot =0; spot , 5000; spot++)
        {
            cout << mergeData[spot] << ",";
        }
        
        delete [] mergeData;
    }
}
