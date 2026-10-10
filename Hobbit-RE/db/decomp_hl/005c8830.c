
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c8830(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0x40600000;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    *(undefined4 *)(param_1 + 0x3c) = 0x42480000;
    *(undefined4 *)(param_1 + 0x40) = 0x42480000;
    fStack_24 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 4);
    fStack_20 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8);
    fStack_1c = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc);
    fStack_38 = DAT_006e92e8 /
                SQRT(fStack_24 * fStack_24 + fStack_20 * fStack_20 + fStack_1c * fStack_1c);
    iVar4 = FUN_0064cf30(fStack_38);
    if (iVar4 == 0) {
      fStack_1c = 0.0;
      fStack_c = DAT_006e92e4;
      fVar2 = DAT_006e92e4;
    }
    else {
      fStack_1c = fStack_1c * fStack_38;
      fStack_c = fStack_24 * fStack_38;
      fVar2 = fStack_20 * fStack_38;
    }
    fStack_38 = *(float *)(param_1 + 0x44);
    fStack_c = fStack_c * fStack_38;
    *(float *)(param_1 + 4) = fStack_c + *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = fVar2 * fStack_38 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = fStack_1c * fStack_38 + *(float *)(param_1 + 0xc);
    FUN_00401f00(*(float *)(param_1 + 4) - *(float *)(param_1 + 0x24),
                 *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28),
                 *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c));
    if (fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10 <
        *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44)) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - _DAT_006e9560;
    }
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      fStack_34 = (float)_DAT_0074642c * _DAT_006e9368 * _DAT_006e957c;
      fVar6 = (float10)FUN_00647b30(-fStack_34,fStack_34);
      fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x14) = (float)fVar6;
      fVar2 = (float)_DAT_00746430 * _DAT_006e9368 * _DAT_006e957c;
      fVar5 = (float10)fVar2;
      if (fVar6 < fVar5 == (NAN(fVar6) || NAN(fVar5))) {
        fVar6 = (float10)fVar2;
      }
      *(float *)(param_1 + 0x14) = (float)fVar6;
      fStack_34 = -((float)_DAT_00746430 * _DAT_006e9368 * _DAT_006e957c);
      if (fVar6 <= (float10)fStack_34) {
        fVar6 = (float10)fStack_34;
      }
      *(float *)(param_1 + 0x14) = (float)fVar6;
      fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x10) = (float)fVar6;
      fStack_2c = (float)fVar6;
      fStack_28 = (float)fVar6;
      fVar5 = (float10)FUN_0064c8d0(fStack_28);
      fStack_30 = (float)fVar5;
      fVar5 = (float10)FUN_0064c800(fStack_2c);
      fStack_28 = (float)fVar5;
      FUN_00440b10(fStack_30,fStack_28);
      fVar2 = *(float *)(param_1 + 0x44);
      fVar3 = fStack_c * fVar2 + *(float *)(param_1 + 4);
      if (((_DAT_006e934c < fVar3) || (fVar3 < _DAT_006f451c != (NAN(fVar3) || NAN(_DAT_006f451c))))
         || ((fVar3 = fStack_8 * fVar2 + *(float *)(param_1 + 8), _DAT_006f4518 < fVar3 ||
             (fVar3 < _DAT_006ec0e4 != (NAN(fVar3) || NAN(_DAT_006ec0e4)))))) {
        *(undefined1 *)(param_1 + 0x20) = 2;
      }
      else {
        *(float *)(param_1 + 4) = fStack_c * fVar2 + *(float *)(param_1 + 4);
        *(float *)(param_1 + 8) = fStack_8 * fVar2 + *(float *)(param_1 + 8);
        *(float *)(param_1 + 0xc) = fStack_4 * fVar2 + *(float *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0x18) = (*(int *)(param_1 + 0x18) == 0x14) + 0x14;
      *(undefined4 *)(param_1 + 0x3c) = 0x41d00000;
      *(undefined4 *)(param_1 + 0x40) = 0x41d00000;
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x44) = 0x40600000;
      *(undefined4 *)(param_1 + 0x18) = 0x16;
      *(undefined4 *)(param_1 + 0x3c) = 0x42480000;
      *(undefined4 *)(param_1 + 0x40) = 0x42480000;
      fStack_38 = *(float *)(param_1 + 0x10);
      fStack_34 = fStack_38;
      fVar5 = (float10)FUN_0064c8d0(fStack_38);
      fStack_34 = (float)fVar5;
      fVar5 = (float10)FUN_0064c800(fStack_38);
      fStack_30 = (float)fVar5;
      FUN_0064c8e0(fStack_34,&fStack_2c,&fStack_38);
      FUN_0064c8e0(fStack_30,&fStack_34,&fStack_28);
      fVar2 = *(float *)(param_1 + 0x44);
      fStack_4 = fStack_28 * fStack_38;
      fStack_24 = fStack_34 * fStack_38 * fVar2;
      *(float *)(param_1 + 4) = fStack_24 + *(float *)(param_1 + 4);
      *(float *)(param_1 + 8) = -fStack_2c * fVar2 + *(float *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = fStack_4 * fVar2 + *(float *)(param_1 + 0xc);
      if ((((_DAT_006e99dc < *(float *)(param_1 + 4)) ||
           (*(float *)(param_1 + 4) < _DAT_006f4524 !=
            (NAN(*(float *)(param_1 + 4)) || NAN(_DAT_006f4524)))) ||
          (_DAT_006e9590 < *(float *)(param_1 + 8))) ||
         (*(float *)(param_1 + 8) < _DAT_006f4524 !=
          (NAN(*(float *)(param_1 + 8)) || NAN(_DAT_006f4524)))) {
        *(undefined1 *)(param_1 + 0x20) = 0;
        fStack_38 = fVar2;
        fStack_28 = (float)FUN_00647b10(0xffffff9c,100);
        fStack_2c = (float)(int)fStack_28 + _DAT_006f4514;
        fStack_28 = (float)FUN_00647b10(0xffffff38,200);
        fVar2 = (float)(int)fStack_28 + _DAT_006efe3c;
        *(float *)(param_1 + 0x28) = fStack_2c;
        *(float *)(param_1 + 0x24) = fVar2;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        fVar5 = (float10)FUN_00647b30(0,0x40c90fdb);
        *(float *)(param_1 + 0x10) = (float)fVar5;
        FUN_0064c8e0((float)fVar5,&fStack_34,&fStack_38);
        fVar2 = fStack_38 * _DAT_006f4520;
        fVar3 = fStack_34 * DAT_006e92e4;
        *(float *)(param_1 + 4) =
             *(float *)(param_1 + 0x24) - (fStack_38 * DAT_006e92e4 - fStack_34 * _DAT_006f4520);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
        *(float *)(param_1 + 8) = *(float *)(param_1 + 0x28) - (fVar3 + fVar2);
        return;
      }
    }
  }
  return;
}

