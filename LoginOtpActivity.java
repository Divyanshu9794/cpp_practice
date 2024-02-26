package com.example.chitchatconnect;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Toast;

import com.google.firebase.firestore.FirebaseFirestore;

import java.util.HashMap;
import java.util.Map;

public class LoginOtpActivity extends AppCompatActivity {

    String phoneNumber;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login_otp);

        phoneNumber = getIntent().getExtras().getString("phone");
        Toast.makeText(getApplicationContext(),phoneNumber,Toast.LENGTH_LONG).show();
}
}