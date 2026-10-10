
void __fastcall FUN_00417260(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x310);
  do {
    FUN_004021c0(puVar6[0xc],puVar6[0xd]);
    iVar2 = FUN_004021c0(*puVar6,puVar6[1]);
    if ((*(uint *)(param_1 + 0x2c4) & 1 << ((byte)iVar5 & 0x1f)) == 0) {
      FUN_004d22c0(1);
      uVar3 = 0;
LAB_0041731f:
      FUN_004d22c0(uVar3);
    }
    else {
      if ((*(byte *)(iVar2 + 0x15b) & 0x40) == 0) {
LAB_00417307:
        FUN_004d22c0(0);
        uVar3 = 1;
        goto LAB_0041731f;
      }
      uVar3 = FUN_004c6fa0();
      iVar4 = FUN_00647e40(uVar3,s_PlateDown_0071fa10);
      if (iVar4 != 0) goto LAB_00417307;
      iVar2 = *(int *)(iVar2 + 0x140);
      if (iVar2 == 0) {
        iVar4 = 0;
        fVar1 = DAT_006e92e4;
      }
      else {
        iVar4 = *(int *)(iVar2 + 0xc);
        fVar1 = *(float *)(iVar2 + 0x10);
      }
      if (fVar1 < (float)(iVar4 + -2) == (NAN(fVar1) || NAN((float)(iVar4 + -2))))
      goto LAB_00417307;
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 2;
    if (5 < iVar5) {
      return;
    }
  } while( true );
}

