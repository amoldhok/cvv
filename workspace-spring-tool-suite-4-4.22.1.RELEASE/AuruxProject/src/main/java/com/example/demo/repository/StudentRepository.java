package com.example.demo.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import com.example.demo.model.StudentModel;

@Repository("studRepo")
public interface StudentRepository extends JpaRepository<StudentModel, Integer>
{

}
