
undefined4 __fastcall FUN_006755f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00655890(1);
  *(int *)(param_1 + 0x13f4) = param_1 + 0x174;
  iVar2 = 0x10;
  iVar1 = param_1 + 0x174;
  do {
    iVar3 = iVar1;
    FUN_00648600(iVar3,0,0x128);
    iVar2 = iVar2 + -1;
    *(int *)(iVar3 + 0x24) = iVar3 + 0x128;
    iVar1 = iVar3 + 0x128;
  } while (iVar2 != 0);
  *(undefined4 *)(iVar3 + 0x24) = 0;
  FUN_006805f0();
  FUN_0064ef00(&DAT_007f86f0,&DAT_007f86f4,&DAT_007f86f8,&DAT_007f86fc,&DAT_007f8700,&DAT_007f8704,
               &DAT_007f8708,&DAT_007f870c,&DAT_007f8710);
  FUN_0064ee70(&LAB_006756e0,FUN_00675490,&LAB_00675700,&LAB_00675730,FUN_00675760,&LAB_006757b0,
               &LAB_006757d0,&LAB_006757f0,&LAB_00675820);
  FUN_00676c30(0x10);
  DAT_007f8714 = 1;
  FUN_006558d0(1);
  return DAT_007f8714;
}

