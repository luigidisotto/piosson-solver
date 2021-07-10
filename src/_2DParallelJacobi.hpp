#ifndef _2DPARALLELJACOBI_HPP
#define _2DPARALLELJAOBI_HPP

#include "_2DIterativePoissonSolver.hpp"
#include "ff/parallel_for.hpp"

using namespace std;
using namespace ff;

class _2DParallelJacobi : public _2DIterativePoissonSolver
{

public:
	int numberOfWorkers;
	int chunk;
	int ci;
	int cj;

public:
	_2DParallelJacobi(double tol, int it, int nw, int chunk, int i, int j);

	void operator()(_2DPoissonEquation *eq);

	int getNumberOfWorkers();

	int getChunk();
};

#endif