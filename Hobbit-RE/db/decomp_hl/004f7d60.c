
void __fastcall FUN_004f7d60(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_004f7a00();
  piVar2 = (int *)(param_1 + 0xc48);
  piVar3 = (int *)(param_1 + 0xeb0);
  iVar1 = 0x4d;
  do {
    if (*piVar2 != 0 || piVar2[1] != 0) {
      FUN_004021c0(piVar2[-0xe8],piVar2[-0xe7]);
      if (*(float *)(param_1 + 0x814) <= DAT_006e92e4) {
        if (*piVar3 != 6) goto LAB_004f7df5;
      }
      else {
        *piVar3 = 6;
      }
      FUN_004d22c0(1);
      piVar3[-0xe8] = 0;
      *piVar2 = 0;
      piVar2[1] = 0;
    }
LAB_004f7df5:
    piVar3 = piVar3 + 1;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}

