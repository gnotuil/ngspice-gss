/**********
Copyright 2001 Regents of the University of California.  All rights reserved.
Author: 2000 Weidong Liu
Author: 2001 Xuemei Xi
File: bsim4ext.h
**********/

#ifdef __STDC__
extern int BSIM4v2acLoad(GENmodel *,CKTcircuit*);
extern int BSIM4v2ask(CKTcircuit *,GENinstance*,int,IFvalue*,IFvalue*);
extern int BSIM4v2convTest(GENmodel *,CKTcircuit*);
extern int BSIM4v2delete(GENmodel*,IFuid,GENinstance**);
extern void BSIM4v2destroy(GENmodel**);
extern int BSIM4v2getic(GENmodel*,CKTcircuit*);
extern int BSIM4v2load(GENmodel*,CKTcircuit*);
extern int BSIM4v2mAsk(CKTcircuit*,GENmodel *,int, IFvalue*);
extern int BSIM4v2mDelete(GENmodel**,IFuid,GENmodel*);
extern int BSIM4v2mParam(int,IFvalue*,GENmodel*);
extern void BSIM4v2mosCap(CKTcircuit*, double, double, double, double,
        double, double, double, double, double, double, double,
        double, double, double, double, double, double, double*,
        double*, double*, double*, double*, double*, double*, double*,
        double*, double*, double*, double*, double*, double*, double*, 
        double*);
extern int BSIM4v2param(int,IFvalue*,GENinstance*,IFvalue*);
extern int BSIM4v2pzLoad(GENmodel*,CKTcircuit*,SPcomplex*);
extern int BSIM4v2setup(SMPmatrix*,GENmodel*,CKTcircuit*,int*);
extern int BSIM4v2temp(GENmodel*,CKTcircuit*);
extern int BSIM4v2trunc(GENmodel*,CKTcircuit*,double*);
extern int BSIM4v2noise(int,int,GENmodel*,CKTcircuit*,Ndata*,double*);
extern int BSIM4v2unsetup(GENmodel*,CKTcircuit*);

#else /* stdc */
extern int BSIM4v2acLoad();
extern int BSIM4v2delete();
extern void BSIM4v2destroy();
extern int BSIM4v2getic();
extern int BSIM4v2load();
extern int BSIM4v2mDelete();
extern int BSIM4v2ask();
extern int BSIM4v2mAsk();
extern int BSIM4v2convTest();
extern int BSIM4v2temp();
extern int BSIM4v2mParam();
extern void BSIM4v2mosCap();
extern int BSIM4v2param();
extern int BSIM4v2pzLoad();
extern int BSIM4v2setup();
extern int BSIM4v2trunc();
extern int BSIM4v2noise();
extern int BSIM4v2unsetup();

#endif /* stdc */

