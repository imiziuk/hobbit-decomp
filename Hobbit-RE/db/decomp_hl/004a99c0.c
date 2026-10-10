
void __thiscall FUN_004a99c0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  uVar4 = FUN_005496c0(s_WispOuter_xbmp_0072b71c,s_Ambient_00729b04);
  FUN_00549430(param_1 + 0x380,uVar4);
  puVar6 = (undefined1 *)(param_1 + 0x26);
  iVar5 = 0x10;
  do {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar7 = (float10)FUN_00647b30(0xc3960000,0x43960000);
    fVar8 = (float10)FUN_00647b30(0,0x41f00000);
    fVar9 = (float10)FUN_00647b30(0xc3960000,0x43960000);
    *(float *)(puVar6 + -0x1e) = (float)(fVar9 + (float10)fVar3);
    *(float *)(puVar6 + -0x26) = (float)(fVar7 + (float10)fVar1);
    *(float *)(puVar6 + -0x22) = (float)(fVar8 + (float10)fVar2);
    *(undefined4 *)(puVar6 + 2) = 0x3f800000;
    *(undefined4 *)(puVar6 + 6) = 0;
    uVar4 = FUN_00647b10(0,1);
    *(undefined4 *)(puVar6 + 10) = uVar4;
    puVar6[1] = 0xff;
    *puVar6 = 0xff;
    puVar6[-1] = 0xff;
    puVar6[-2] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(float *)(puVar6 + -0x1a) = (float)(fVar7 + (float10)fVar1);
    *(float *)(puVar6 + -0x16) = (float)(fVar8 + (float10)fVar2);
    *(float *)(puVar6 + -0x12) = (float)(fVar9 + (float10)fVar3);
    *(undefined4 *)(puVar6 + -6) = 0;
    *(undefined4 *)(puVar6 + -10) = 0;
    *(undefined4 *)(puVar6 + -0xe) = 0;
    puVar6 = puVar6 + 0x38;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

